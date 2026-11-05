
void FUN_0218b624(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    *(undefined4 *)(param_1 + 0x90) = 1;
    uVar1 = FUN_02001ed8();
    *(undefined4 *)(param_1 + 0x94) = uVar1;
  }
  return;
}

