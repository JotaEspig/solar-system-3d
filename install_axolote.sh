pwd=$(pwd)
git clone -b v0.2.2 https://github.com/JotaEspig/axolote-engine.git --depth=1
cd axolote-engine
sed -i 's/\r//' install.sh
echo -n "1" | ./install.sh $pwd
cd $pwd
