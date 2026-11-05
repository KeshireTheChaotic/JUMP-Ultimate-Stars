
int * FUN_0215e3a8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6,char param_7)

{
  int *piVar1;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  iStack_14 = param_4;
  FUN_0214d438();
  DAT_020a0dd0 = *(undefined4 *)(param_1 + 4);
  FUN_0202b3c8(0x40);
  piVar1 = (int *)FUN_021504fc();
  if (param_7 != '\0') {
    (**(code **)(*piVar1 + 0x50))(piVar1,param_2,0);
    *(undefined1 *)(*(int *)(piVar1[1] + 100) + 0x28) = 1;
  }
  local_18 = param_6 << 0xc;
  FUN_0214d494(piVar1,&local_18);
  local_1c = param_4 << 0xc;
  local_20 = param_5 << 0xc;
  FUN_0214ce68(piVar1,&local_1c,&local_20);
  (**(code **)(*(int *)piVar1[1] + 0xd8))((int *)piVar1[1],0);
  FUN_0214d4cc();
  return piVar1;
}

