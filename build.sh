BASE_DIR=`pwd`

rm build -rf
mkdir build

pushd build

cmake ..

make -j8

INSTALL_DIR=$BASE_DIR/random_distribute
rm -rf $INSTALL_DIR
make install/strip DESTDIR=$INSTALL_DIR

popd

rm librandom -rf
mkdir librandom

pushd librandom

cp -r ../random_distribute/include ./
cp -r ../random_distribute/lib ./

popd