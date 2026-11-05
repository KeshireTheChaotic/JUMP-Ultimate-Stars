
undefined4 FUN_0214da40(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + 6);
  do {
    uVar2 = FUN_0214cdc4(*(undefined2 *)(pbVar4 + 2));
    bVar1 = *pbVar4;
    if (bVar1 < 0x36) {
      if (bVar1 < 0x35) {
        if (bVar1 == 0x30) {
LAB_0214da72:
          if (0x40 < uVar2) {
            return 0xffffffff;
          }
        }
      }
      else {
LAB_0214da82:
        if (0x21 < uVar2) {
          return 0xffffffff;
        }
      }
    }
    else if (bVar1 < 0x41) {
      if (bVar1 == 0x40) goto LAB_0214da72;
    }
    else if (bVar1 == 0x45) goto LAB_0214da82;
    if (bVar1 < 0x36) {
      if (bVar1 < 0x35) {
        if (bVar1 != 0x30) {
          return 0xffffffff;
        }
        goto LAB_0214dab0;
      }
LAB_0214dac0:
      if ((uVar2 != 0) && (pbVar4[uVar2 + 5] != 0)) {
        return 0xffffffff;
      }
      FUN_0214cf10(param_2 + 8,pbVar4 + 6,uVar2);
    }
    else {
      if (0x40 < bVar1) {
        if (bVar1 != 0x45) {
          return 0xffffffff;
        }
        goto LAB_0214dac0;
      }
      if (bVar1 != 0x40) {
        return 0xffffffff;
      }
LAB_0214dab0:
      FUN_0214cf10(param_2 + 0x30,pbVar4 + 6,uVar2);
      *(uint *)(param_2 + 4) = uVar2;
    }
    if (*(short *)(pbVar4 + 4) == 0) {
      return 0;
    }
    iVar3 = FUN_0214cdc4();
    pbVar4 = (byte *)(param_1 + 6 + iVar3);
  } while( true );
}

