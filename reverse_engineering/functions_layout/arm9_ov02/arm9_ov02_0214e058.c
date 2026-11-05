
void FUN_0214e058(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar1 = JGalaxyMap::JGalaxyMap_Create();
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    FUN_02073ebc(2,1);
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x56) == '\x03') {
      FUN_02073ebc(4,1);
    }
    else {
      FUN_02073ebc(6,1);
    }
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  FUN_0214e270(param_1);
  return;
}

