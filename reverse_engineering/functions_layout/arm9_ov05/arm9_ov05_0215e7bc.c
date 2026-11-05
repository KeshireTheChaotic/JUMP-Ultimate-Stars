
int FUN_0215e7bc(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                undefined4 param_6,undefined1 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int *piVar2;
  int local_34;
  int local_30;
  int local_2c [3];
  int local_20;
  int local_1c;
  int iStack_18;
  
  iStack_18 = param_4;
  FUN_0214d438();
  DAT_020a0dd0 = *(undefined4 *)(param_1 + 4);
  iVar1 = func_0x021ca3a4(param_8,0x10,s_font_jskfont_aft_02170708,0,0);
  local_2c[1] = 0x1000;
  local_34 = param_9 << 0xc;
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  local_30 = local_34;
  local_2c[0] = local_34;
  (**(code **)(*piVar2 + 0x9c))(piVar2,&local_34,&local_30,local_2c,local_2c + 1);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0xa4))(piVar2,param_7);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0xa8))(piVar2,param_6);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0x68))(piVar2,param_2);
  local_20 = param_4 << 0xc;
  local_1c = param_3 << 0xc;
  FUN_0214ce68(iVar1,&local_1c,&local_20);
  local_2c[2] = param_5 << 0xc;
  FUN_0214d494(iVar1,local_2c + 2);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  FUN_0214d4cc();
  return iVar1;
}

