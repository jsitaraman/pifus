for i in {1000,2000,4000,8000,16000,32000};do
echo "---------------------------------------"
echo $i
cd grid;cp sphere_files/sphere_$i.facet ./data.tri
cp input_files/input_$i ./input
head -1 data.tri
head -2 input
jsrun -n 2 ../../build/gridGen/buildGrid
cd ..;
jsrun -n 1 -g 1 ../build/driver/test_connect.exe 
echo $i;
done
