
void FUN_02165d6c(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  iVar1 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    do {
      *puVar2 = *puVar2 & 0xc1fffcff | 0x200;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  FUN_02167198(param_1);
  FUN_021660d0(*(undefined4 *)
                (DAT_0216e834 + (uint)(DAT_0216e834 + 0x228U <= param_1) * 0x228 + 0x224),param_1);
  return;
}

