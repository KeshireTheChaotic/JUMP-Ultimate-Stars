
void FUN_0208a1e0(undefined2 param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_3 + 0x21U & 0xffffffe0;
  if (0x400 < DAT_0214be80 + uVar2) {
    DAT_0214be80 = 0;
  }
  iVar3 = DAT_0214be9c + DAT_0214be80;
  puVar1 = (undefined2 *)(DAT_0214be9c + DAT_0214be80);
  DAT_0214be80 = DAT_0214be80 + uVar2;
  *puVar1 = param_1;
  FUN_02051890(param_2,iVar3 + 2,param_3);
  FUN_020596e8(&DAT_0208a1dd,iVar3,iVar3,(param_3 + 1U & 0xfffffffe) + 2 & 0xffff,param_4,0xe,3);
  return;
}

