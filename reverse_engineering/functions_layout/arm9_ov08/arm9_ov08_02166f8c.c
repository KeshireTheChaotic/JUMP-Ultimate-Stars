
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02166f8c(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  iVar2 = DAT_0216e854;
  uVar4 = ((_DAT_04000130 | _DAT_027fffa8) ^ 0x2fff) & 0x2fff;
  uVar1 = (ushort)uVar4;
  *(ushort *)(DAT_0216e854 + 0x32) = uVar1 & (uVar1 ^ *(ushort *)(DAT_0216e854 + 0x30));
  *(ushort *)(DAT_0216e854 + 0x36) = *(ushort *)(iVar2 + 0x30) & (uVar1 ^ *(ushort *)(iVar2 + 0x30))
  ;
  *(ushort *)(DAT_0216e854 + 0x30) = uVar1;
  *(undefined2 *)(DAT_0216e854 + 0x34) = *(undefined2 *)(DAT_0216e854 + 0x32);
  uVar6 = 0;
  pcVar5 = (char *)0x216e858;
  do {
    uVar3 = 1 << (uVar6 & 0xff);
    if ((uVar4 & uVar3 & 0xffff) == 0) {
      *pcVar5 = '\0';
    }
    else {
      *pcVar5 = *pcVar5 + '\x01';
      uVar1 = (ushort)uVar3;
      if (*pcVar5 == '(') {
        *(ushort *)(DAT_0216e854 + 0x34) = *(ushort *)(DAT_0216e854 + 0x34) | uVar1;
      }
      else if (*pcVar5 == '/') {
        *(ushort *)(DAT_0216e854 + 0x34) = *(ushort *)(DAT_0216e854 + 0x34) | uVar1;
        *pcVar5 = '(';
      }
    }
    pcVar5 = pcVar5 + 1;
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0xe);
  return;
}

