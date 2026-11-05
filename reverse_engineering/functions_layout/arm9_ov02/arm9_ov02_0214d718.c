
int FUN_0214d718(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  iVar1 = FUN_0203b404();
  FUN_0214d614(*(undefined4 *)(iVar1 + 0x88));
  iVar1 = func_0x021caa0c(s_font_jskfont_aft_0215be6c,0,0);
  func_0x021c5fb4(*(undefined4 *)(iVar1 + 4));
  iVar2 = FUN_0214d498();
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0xa8))(piVar3,2);
  local_18 = param_2 << 0xc;
  FUN_0214d650(iVar2,&local_18);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  local_20 = 0xf000;
  local_1c = 0x8000;
  FUN_0214d4c0(iVar2,&local_1c,&local_20);
  if (param_1 != 0) {
    FUN_0214d6b0(param_1,iVar2);
    FUN_0214d678(iVar2,param_1);
  }
  FUN_0214d6e8();
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
  return iVar2;
}

