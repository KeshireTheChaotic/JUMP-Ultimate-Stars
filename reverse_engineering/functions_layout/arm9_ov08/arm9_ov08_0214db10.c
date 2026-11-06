
undefined4 FUN_0214db10(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)(param_1 + 6);
  do {
    uVar1 = FUN_0214cdc4(*(undefined2 *)(pbVar5 + 2));
    uVar2 = (uint)*pbVar5;
    if (uVar2 < 0x22) {
      if (uVar2 < 0x21) {
        if (uVar2 < 0x16) {
          if (-1 < (int)(uVar2 - 0x10)) {
            uVar3 = (*(code *)((int)&switchD_0214db44::switchdataD_0214db46 +
                              (int)(short)(&switchD_0214db44::switchdataD_0214db46)[uVar2 - 0x10]))
                              ();
            return uVar3;
          }
        }
        else if (uVar2 == 0x20) goto FUN_0214db7c;
      }
      else {
FUN_0214db7c:
        if (0xd < uVar1) {
          return 0xffffffff;
        }
      }
    }
    else if (uVar2 < 0x24) {
      if ((0x22 < uVar2) || (uVar2 == 0x22)) goto FUN_0214db7c;
    }
    else if ((uVar2 == 0x25) && (0x21 < uVar1)) {
      return 0xffffffff;
    }
    if (uVar2 < 0x22) {
      if (uVar2 < 0x21) {
        if (uVar2 < 0x16) {
          if ((int)(uVar2 - 0x10) < 0) {
            return 0xffffffff;
          }
          uVar3 = (*(code *)((int)&switchD_0214dbbc::switchdataD_0214dbbe +
                            (int)(short)(&switchD_0214dbbc::switchdataD_0214dbbe)[uVar2 - 0x10]))();
          return uVar3;
        }
        if (uVar2 != 0x20) {
          return 0xffffffff;
        }
        FUN_0214cf10(param_2 + 0x30,pbVar5 + 6,uVar1);
        *(uint *)(param_2 + 4) = uVar1;
      }
      else {
        FUN_0214cf10(param_2 + 0x70,pbVar5 + 6,uVar1);
        *(uint *)(param_2 + 4) = uVar1;
      }
    }
    else if (uVar2 < 0x24) {
      if (uVar2 < 0x23) {
        if (uVar2 != 0x22) {
          return 0xffffffff;
        }
        FUN_0214cf10(param_2 + 0xb0,pbVar5 + 6,uVar1);
        *(uint *)(param_2 + 4) = uVar1;
      }
      else {
        FUN_0214cf10(param_2 + 0xf0,pbVar5 + 6,uVar1);
        *(uint *)(param_2 + 4) = uVar1;
      }
    }
    else {
      if (uVar2 != 0x25) {
        return 0xffffffff;
      }
      if ((uVar1 != 0) && (pbVar5[uVar1 + 5] != 0)) {
        return 0xffffffff;
      }
      FUN_0214cf10(param_2 + 8,pbVar5 + 6,uVar1);
    }
    if (*(short *)(pbVar5 + 4) == 0) {
      return 0;
    }
    iVar4 = FUN_0214cdc4();
    pbVar5 = (byte *)(param_1 + 6 + iVar4);
  } while( true );
}

