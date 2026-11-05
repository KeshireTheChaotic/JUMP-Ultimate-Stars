
void FUN_0217aad4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x4c) = 0;
  for (iVar3 = 0; bVar1 = (&DAT_0218140c)[iVar3], -1 < (char)bVar1; iVar3 = iVar3 + 1) {
    iVar2 = FUN_0217ab28(*(undefined4 *)(param_1 + 0x2c),(int)(char)(&DAT_02181422)[iVar3]);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1 << (uint)bVar1;
    }
  }
  return;
}

