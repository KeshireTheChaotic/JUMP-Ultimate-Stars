
void FUN_0214e61c(int param_1)

{
  int iVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    iVar1 = FUN_0203b3f4();
    FUN_0214e6bc(*(undefined4 *)(iVar1 + 0x88),(int)*(char *)(param_1 + 0x58));
    FUN_02064e00(0x400106c,(int)*(char *)(param_1 + 0x58));
  }
  else {
    iVar1 = FUN_0203b3e4();
    FUN_0214e6bc(*(undefined4 *)(iVar1 + 0x88),(int)*(char *)(param_1 + 0x58));
    iVar1 = FUN_0203b3f4();
    FUN_0214e6bc(*(undefined4 *)(iVar1 + 0x88),(int)*(char *)(param_1 + 0x58));
    FUN_02064e00(&DAT_0400006c,(int)*(char *)(param_1 + 0x58));
    FUN_02064e00(0x400106c,(int)*(char *)(param_1 + 0x58));
  }
  bVar2 = *(char *)(param_1 + 0x59) + 1;
  *(byte *)(param_1 + 0x59) = bVar2;
  if (bVar2 <= *(byte *)(param_1 + 0x5b)) {
    *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) + *(char *)(param_1 + 0x5a);
  }
  return;
}

