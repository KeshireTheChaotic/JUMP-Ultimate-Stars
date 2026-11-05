
void FUN_0215683c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined1 auStack_14 [8];
  int local_c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(char *)(iVar2 + 0x21f) != '\0') &&
     (FUN_0214e27c(&local_c,*(undefined4 *)(iVar2 + 0x130)), -1 < local_c)) {
    local_18 = 0x100000;
    FUN_02150d54(auStack_14,*(undefined4 *)(iVar2 + 0x130),s_Position_x_02161330);
    uVar1 = FUN_021567dc(auStack_14,0x494c,&local_18,0xf,0,1);
    FUN_02020f38(*(undefined4 *)(iVar2 + 0x130),uVar1);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x130) + 4),FUN_021566c8);
  }
  return;
}

