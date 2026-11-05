
int FUN_0218e438(uint param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint local_18;
  
  uVar8 = FUN_02054b44();
  iVar7 = 0;
  do {
    while( true ) {
      iVar4 = (*DAT_021a8530)();
      if (((iVar4 == 0) || (iVar7 != 0)) ||
         (uVar9 = FUN_02054b44(),
         (param_2 + 1) * 0xf <=
         (int)(((uint)uVar9 >> 0x10 | (int)((ulonglong)uVar9 >> 0x20) << 0x10) -
              ((uint)uVar8 >> 0x10 | (int)((ulonglong)uVar8 >> 0x20) << 0x10)))) {
        return iVar7;
      }
      iVar4 = FUN_0218ec54();
      if (iVar4 != 0) break;
      FUN_02191554();
    }
    pcVar2 = (char *)FUN_0218f044(&local_18);
    if (((0xf0 < local_18) && (*pcVar2 == '\x02')) &&
       ((param_1 ==
         (((int)(uint)*(ushort *)(pcVar2 + 4) >> 8 | (*(ushort *)(pcVar2 + 4) & 0xff) << 8) << 0x10
         | (int)(uint)*(ushort *)(pcVar2 + 6) >> 8 | (*(ushort *)(pcVar2 + 6) & 0xff) << 8) &&
        (iVar4 = FUN_02191094(pcVar2 + 0x1c,&DAT_021a8548), iVar4 == 0)))) {
      iVar7 = 3;
      uVar3 = CONCAT22(CONCAT11(pcVar2[0x10],pcVar2[0x11]),CONCAT11(pcVar2[0x12],pcVar2[0x13]));
      if (((pcVar2[0xec] == 'c') && (pcVar2[0xed] == -0x7e)) &&
         ((pcVar2[0xee] == 'S' && (pbVar6 = (byte *)(pcVar2 + 0xf0), pcVar2[0xef] == 'c')))) {
        while (pbVar5 = pbVar6, pbVar5 < pcVar2 + local_18) {
          bVar1 = *pbVar5;
          pbVar6 = pbVar5 + 1;
          if (bVar1 == 0xff) break;
          if (bVar1 != 0) {
            if (bVar1 < 0x34) {
              if (bVar1 < 0x33) {
                if ((bVar1 < 7) && (bVar1 != 0)) {
                  if (bVar1 == 1) {
                    DAT_021a8504 = CONCAT22(CONCAT11(pbVar5[2],pbVar5[3]),
                                            CONCAT11(pbVar5[4],pbVar5[5]));
                  }
                  else if (bVar1 == 3) {
                    DAT_021a8514 = CONCAT22(CONCAT11(pbVar5[2],pbVar5[3]),
                                            CONCAT11(pbVar5[4],pbVar5[5]));
                  }
                  else if (bVar1 == 6) {
                    if (*pbVar6 < 8) {
                      DAT_021a8554 = 0;
                    }
                    else {
                      DAT_021a8554 = CONCAT22(CONCAT11(pbVar5[6],pbVar5[7]),
                                              CONCAT11(pbVar5[8],pbVar5[9]));
                    }
                    DAT_021a8550 = CONCAT22(CONCAT11(pbVar5[2],pbVar5[3]),
                                            CONCAT11(pbVar5[4],pbVar5[5]));
                  }
                }
              }
              else {
                DAT_021a8534 = CONCAT22(CONCAT11(pbVar5[2],pbVar5[3]),CONCAT11(pbVar5[4],pbVar5[5]))
                ;
              }
            }
            else if (bVar1 < 0x36) {
              if (bVar1 == 0x35) {
                if (pbVar5[2] == 2) {
                  iVar7 = 1;
                  DAT_021a851c = uVar3;
                }
                else if (pbVar5[2] == 5) {
                  iVar7 = 2;
                  DAT_021a8538 = uVar3;
                }
              }
            }
            else if (bVar1 == 0x36) {
              DAT_021a8508 = CONCAT22(CONCAT11(pbVar5[2],pbVar5[3]),CONCAT11(pbVar5[4],pbVar5[5]));
            }
            pbVar6 = pbVar6 + *pbVar6 + 1;
          }
        }
      }
    }
    FUN_0218efb4(local_18);
  } while( true );
}

