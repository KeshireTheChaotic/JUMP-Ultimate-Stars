
int FUN_021533e4(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_44;
  undefined1 auStack_40 [44];
  
  bVar1 = true;
  iVar4 = -2;
  iVar5 = DAT_0216d1ac + DAT_0216d168 * 0xc0;
  if (iVar5 == 0) {
    return 0;
  }
  iVar2 = FUN_02153888(iVar5,0,0x30000);
  if (iVar2 == 0) {
    return -2;
  }
  FUN_020550a0(auStack_40);
  FUN_02054ee8(auStack_40,0x3fec42,0,&LAB_02153660_1,0x12);
  local_44 = -8;
  while( true ) {
    uVar3 = FUN_021504d4();
    if (DAT_0216afd8 <= uVar3) {
      iVar4 = -3;
      goto LAB_021534d8;
    }
    if (DAT_0216d160 != 0) break;
    FUN_02052ea0(10);
    iVar2 = FUN_021536a8();
    while (iVar2 != 0) {
      if (iVar2 < 0xd) {
        if (iVar2 < 0xc) {
          if (((5 < iVar2) || (iVar2 < 4)) || ((iVar2 != 4 && (iVar2 != 5)))) goto LAB_021534ca;
        }
        else {
          bVar1 = false;
          iVar4 = 1;
        }
      }
      else if ((iVar2 < 0x14) && (0xc < iVar2)) {
        if (iVar2 == 0xd) {
          if (DAT_0216d160 == 0) {
            iVar2 = FUN_02153888(iVar5,0,0x30000);
            if (iVar2 == 0) {
              return iVar4;
            }
          }
          else {
            bVar1 = false;
            iVar4 = local_44;
          }
        }
        else if ((iVar2 != 0x12) && (iVar2 != 0x13)) goto LAB_021534ca;
      }
      else {
LAB_021534ca:
        bVar1 = false;
      }
      iVar2 = FUN_021536a8();
    }
    if (!bVar1) {
LAB_021534d8:
      FUN_02054e50(auStack_40);
      do {
        iVar5 = FUN_021536a8();
      } while (iVar5 != 0);
      if (0 < iVar4) {
        DAT_0216d170 = 1;
        iVar5 = func_0x02193680(&DAT_0216b03c);
        if (iVar5 < 0) {
          iVar4 = -2;
        }
        else {
          DAT_0216d174 = 1;
        }
      }
      return iVar4;
    }
  }
  iVar4 = -8;
  goto LAB_021534d8;
}

