
void FUN_021bddcc(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  if ((((DAT_021d51a8 & 1 << (param_1 & 0xff)) != 0) &&
      (iVar3 = DAT_021d525c + param_1 * 0x5d4, *(char *)(iVar3 + 0x1d52) != '\0')) &&
     (*(short *)(iVar3 + 0x1d4c) != 0)) {
    uVar1 = *(ushort *)(iVar3 + 0x1d48);
    uVar2 = *(ushort *)(iVar3 + 0x1d4a);
    if (((uint)uVar2 <= (uint)uVar1) && ((uint)uVar1 <= uVar2 + 2)) {
      *(ushort *)(iVar3 + 0x1d48) = uVar1 + 1;
      return;
    }
    *(ushort *)(iVar3 + 0x1d48) = uVar2;
  }
  return;
}

