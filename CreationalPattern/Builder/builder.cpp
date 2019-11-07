#include "builder.h"



Product::Product()
{

}


Product::~Product()
{

}


void Product::setPartA(int param)
{
    partA = param;
}


void Product::setPartB(int param)
{
    partB = param;
}


void Product::setPartC(int param)
{
    partC = param;
}


void Product::show()
{
    fprintf(stderr,"partA = %d  partB = %d  partC = %d\n",partA,partB,partC);
}


AbstractBuilder::AbstractBuilder()
{

}


AbstractBuilder::~AbstractBuilder()
{

}


Builder::Builder()
:curProduct(NULL)
{

}


Builder::~Builder()
{

}


void Builder::createProduct()
{
    fprintf(stderr,"����һ����Ʒ�տ� \n");
    curProduct = new Product();
}


void Builder::buildPartA(int param)
{
    fprintf(stderr,"���ڹ�����Ʒ��A���� \n");
    curProduct->setPartA(param);
}


void Builder::buildPartB(int param)
{
    fprintf(stderr,"���ڹ�����Ʒ��B����\n");
    curProduct->setPartB(param);
}


void Builder::buildPartC(int param)
{
    fprintf(stderr,"���ڹ�����Ʒ��C����\n");
    curProduct->setPartC(param);
}
Product* Builder::getProduct()
{
    //�ҵ�������ǲ�Ʒ����ȥ֮��,��ô�ͷ���ôŪ�Ͳ��齨���߹���
    return curProduct;
}