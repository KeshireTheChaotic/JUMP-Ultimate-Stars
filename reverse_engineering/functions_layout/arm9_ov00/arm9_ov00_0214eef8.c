
int FUN_0214eef8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_18;
  
  local_18 = param_4;
  FUN_0214ed48();
  iVar1 = func_0x021caa0c(s_font_jskfont_aft_02160ce8,0,0);
  func_0x021c5fb4(*(undefined4 *)(iVar1 + 4));
  iVar2 = FUN_0214ed84();
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x88))(piVar3,param_3 + 1);
  local_18 = param_2 << 0xc;
  FUN_0214eed0(iVar2,&local_18);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0xa8))(piVar3,4);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x84))(piVar3,param_4);
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
  FUN_0214edac();
  return iVar2;
}

