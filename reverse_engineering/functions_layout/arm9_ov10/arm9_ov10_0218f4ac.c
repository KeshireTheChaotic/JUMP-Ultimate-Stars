
void FUN_0218f4ac(void)

{
  int iVar1;
  uint uVar2;
  uint local_18 [2];
  
  do {
    iVar1 = FUN_02190e38(local_18);
    if (0x22 < local_18[0]) {
      uVar2 = (int)(uint)*(ushort *)(iVar1 + 0xc) >> 8 | (*(ushort *)(iVar1 + 0xc) & 0xff) << 8;
      if (uVar2 == 0x800) {
        FUN_0218f4f8(iVar1 + 0xe,local_18[0] - 0xe);
      }
      else if (uVar2 == 0x806) {
        FUN_02190448(iVar1 + 0xe,local_18[0] - 0xe);
      }
    }
    FUN_02190dfc();
  } while( true );
}

