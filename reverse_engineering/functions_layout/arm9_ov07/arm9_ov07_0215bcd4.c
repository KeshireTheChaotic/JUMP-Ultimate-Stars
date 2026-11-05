
void FUN_0215bcd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_0215bedc(param_1,*(undefined4 *)(param_1 + 0x84),param_3,param_4,param_4);
  for (uVar1 = *(uint *)(param_1 + 0x84);
      ((int)uVar1 < *(int *)(param_1 + 0x54) &&
      (*(char *)(*(int *)(*(int *)(param_1 + 0x74) + 8) + uVar1 * 0x1c) != '\0')); uVar1 = uVar1 + 1
      ) {
    FUN_0215bfd0(param_1,uVar1);
  }
  FUN_0215bf08(param_1,uVar1,4,0x4ff0,1);
  *(uint *)(param_1 + 0x5c) = uVar1;
  while (uVar1 = uVar1 + 1, (int)uVar1 < *(int *)(param_1 + 0x58)) {
    FUN_0215bf08(param_1,uVar1,5,uVar1 | 0x8000,(int)uVar1 < 6);
  }
  return;
}

