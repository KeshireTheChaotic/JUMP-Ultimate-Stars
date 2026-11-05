
undefined4 FUN_0215bb7c(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  byte local_24 [4];
  int local_20;
  byte local_1c [8];
  
  local_24[0] = DAT_0216aa1c;
  local_24[1] = DAT_0216aa1d;
  local_24[2] = DAT_0216aa1e;
  local_24[3] = DAT_0216aa1f;
  iVar6 = 0;
  iVar4 = 0;
  do {
    if (*(char *)(DAT_0216e77c + 8 + iVar4) != ' ') {
      iVar5 = 0;
      pbVar3 = local_24;
      do {
        bVar1 = *(byte *)(DAT_0216e77c + 8 + iVar4 + iVar5);
        if (*pbVar3 < bVar1) {
          return 0;
        }
        if (bVar1 < *pbVar3) break;
        pbVar3 = pbVar3 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
    }
    iVar4 = iVar4 + 3;
    iVar6 = iVar6 + 1;
    if (3 < iVar6) {
      FUN_02161a84(DAT_0216e77c + 8,local_1c);
      FUN_02157038(&local_20,0);
      if (local_20 != 1) {
        iVar4 = FUN_0206a23c(local_1c);
        if (iVar4 == 0) {
          return 0;
        }
        return 1;
      }
      bVar2 = false;
      local_30 = 0;
      pbVar3 = local_1c;
      do {
        iVar4 = 0;
        do {
          if (bVar2) {
            if (((uint)*pbVar3 & 1 << (7U - iVar4 & 0xff)) != 0) {
              return 0;
            }
          }
          else if (((uint)*pbVar3 & 1 << (7U - iVar4 & 0xff)) == 0) {
            bVar2 = true;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
        pbVar3 = pbVar3 + 1;
        local_30 = local_30 + 1;
      } while (local_30 < 4);
      return 1;
    }
  } while( true );
}

