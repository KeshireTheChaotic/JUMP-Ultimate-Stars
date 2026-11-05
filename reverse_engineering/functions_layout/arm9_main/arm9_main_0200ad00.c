
int * FUN_0200ad00(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 local_10;
  
  if (*param_2 << 0x1f < 0) {
    uVar2 = 0;
    piVar3 = param_1;
    do {
      uVar2 = uVar2 + 1;
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    } while (uVar2 < 3);
    FUN_0200ad6c(param_1,param_2[1]);
    FUN_0200aed8(param_1,0,0,param_2[2],param_2[2] + param_2[1],local_10);
  }
  else {
    iVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = iVar1;
    param_1[2] = param_2[2];
  }
  return param_1;
}

