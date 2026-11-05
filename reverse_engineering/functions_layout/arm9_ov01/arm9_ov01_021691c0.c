
int FUN_021691c0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_0203b3f4();
  FUN_0214f7f8(*(undefined4 *)(iVar1 + 0x88));
  iVar1 = func_0x021caa0c(s_font_DSFont_aft_0216ddac,0,0);
  func_0x021c5fb4(*(undefined4 *)(iVar1 + 4));
  iVar2 = FUN_0214d37c();
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x6c))(piVar3,param_1,0xffffffff);
  FUN_0214f864(iVar2,param_2);
  local_1c = 0xa7000;
  FUN_0214e6c0(iVar2,&local_1c);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  if (param_3 != 0) {
    FUN_0214e688(param_3,iVar2);
    FUN_0214f7c0(iVar2,param_3);
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
  FUN_0214f834();
  return iVar2;
}

