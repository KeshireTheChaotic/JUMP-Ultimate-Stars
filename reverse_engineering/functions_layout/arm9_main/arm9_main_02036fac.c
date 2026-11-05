
void FUN_02036fac(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02004b04(param_2);
  uVar2 = jus_AllocDebug(iVar1 + 1);
  FUN_02004b18(uVar2,param_2);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  return;
}

