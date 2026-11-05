
void FUN_0214fdb0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  
  bVar3 = param_1 != (int *)0x0;
  if (bVar3) {
    param_1[0xb] = param_2;
    param_1[0xc] = param_3;
  }
  piVar2 = param_1;
  if (bVar3 && param_3 != 0) {
    piVar2 = *(int **)(param_1[0x1a] + 4);
    param_2 = piVar2[0x52];
  }
  if ((bVar3 && param_3 != 0) && param_2 != 0) {
    sVar1 = (**(code **)(*piVar2 + 0x194))();
    (*(code *)param_1[0xb])(param_1,param_1[0xc],1,(int)sVar1,0,param_4);
  }
  return;
}

