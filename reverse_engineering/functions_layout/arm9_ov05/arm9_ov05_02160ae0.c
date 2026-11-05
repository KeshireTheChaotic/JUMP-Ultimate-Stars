
int FUN_02160ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_021709e4,0x1de,param_4);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x021af26c(iVar1,param_1,param_2,param_3);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  return piVar2[6];
}

