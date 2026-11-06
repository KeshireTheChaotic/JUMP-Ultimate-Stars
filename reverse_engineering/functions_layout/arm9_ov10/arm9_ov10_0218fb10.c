
void FUN_0218fb10(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_02190100();
  if (iVar2 == 0) {
    FUN_0218ff48(param_1,param_2,param_3,0);
    return;
  }
  bVar1 = *(byte *)(param_2 + 0xd);
  *(uint *)(iVar2 + 0x30) =
       ((int)(uint)*(ushort *)(param_2 + 8) >> 8 | (*(ushort *)(param_2 + 8) & 0xff) << 8) << 0x10 |
       (int)(uint)*(ushort *)(param_2 + 10) >> 8 | (*(ushort *)(param_2 + 10) & 0xff) << 8;
  if ((*(char *)(iVar2 + 8) == '\x04') &&
     (*(uint *)(iVar2 + 0x24) !=
      (((int)(uint)*(ushort *)(param_2 + 4) >> 8 | (*(ushort *)(param_2 + 4) & 0xff) << 8) << 0x10 |
      (int)(uint)*(ushort *)(param_2 + 6) >> 8 | (*(ushort *)(param_2 + 6) & 0xff) << 8))) {
    FUN_02190024(iVar2,0);
    return;
  }
  *(ushort *)(iVar2 + 0x2c) = *(ushort *)(param_2 + 0xe) >> 8 | *(ushort *)(param_2 + 0xe) << 8;
  if (*(byte *)(iVar2 + 8) < 10) {
    (*(code *)((int)&switchD_0218fbae::switchdataD_0218fbb0 +
              (int)(short)(&switchD_0218fbae::switchdataD_0218fbb0)[*(byte *)(iVar2 + 8)]))();
    return;
  }
  if ((bVar1 & 1) != 0) {
    *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
  }
  FUN_02190024(iVar2,0);
  FUN_02053008();
  return;
}

