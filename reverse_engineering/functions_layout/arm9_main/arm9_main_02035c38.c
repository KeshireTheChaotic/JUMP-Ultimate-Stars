
void FUN_02035c38(int param_1)

{
  uint uVar1;
  
  if (DAT_020a0d94 < 8) {
    for (uVar1 = 0; uVar1 < DAT_020a0d94; uVar1 = uVar1 + 1) {
      if ((&DAT_020a19c4)[uVar1] == param_1) {
        (&DAT_020a19c4)[uVar1] = (&DAT_020a19c4)[DAT_020a0d94 - 1];
        break;
      }
    }
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
  return;
}

