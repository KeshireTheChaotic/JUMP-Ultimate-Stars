
int FUN_0205d708(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0205c678();
  if (puVar1 == (undefined4 *)0x0) {
    return 2;
  }
  iVar2 = FUN_0205d55c(*(undefined2 *)(puVar1 + 1),param_2,param_3,param_4);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((param_2 & 1) == 0) {
    iVar2 = FUN_0205c3bc(*puVar1);
  }
  else {
    iVar2 = FUN_0205d3a8(*puVar1,param_3,param_4);
    if (iVar2 == 0) {
      return 6;
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  return 0;
}

