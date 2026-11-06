
void FUN_0206df9c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0206e064();
  FUN_02073134();
  FUN_020517fc(&DAT_020afcb0,0,0x1c);
  FUN_020517fc(&DAT_020afccc,0,0x174);
  uVar1 = OS_GetTick();
  FUN_02030f24(*(undefined4 *)(DAT_020a0da8 + 4),uVar1);
  FUN_02070d64();
  FUN_020704f4();
  iVar2 = FUN_02075df0();
  if (iVar2 == 0) {
    iVar2 = AutoSaveLoad::AutoSave_Add(1);
    while (*(int *)(*(int *)(iVar2 + 4) + 0x224) == 0) {
      (*DAT_020a0e18)();
    }
  }
  FUN_02071dac();
  iVar2 = FUN_02071f54();
  DAT_020afeb0 = iVar2 == 0;
  DAT_020afeb4 = 0;
  return;
}

