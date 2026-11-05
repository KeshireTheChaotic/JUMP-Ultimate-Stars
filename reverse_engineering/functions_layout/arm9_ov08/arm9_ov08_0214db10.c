
undefined4 FUN_0214db10(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + 6);
  do {
    uVar2 = FUN_0214cdc4(*(undefined2 *)(pbVar4 + 2));
    bVar1 = *pbVar4;
    if (bVar1 < 0x22) {
      if (bVar1 < 0x21) {
        if (bVar1 < 0x16) {
          switch(bVar1) {
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
            if (5 < uVar2) {
              return 0xffffffff;
            }
            break;
          case 0x15:
            goto switchD_0214db44_caseD_15;
          }
        }
        else if (bVar1 == 0x20) goto FUN_0214db7c;
      }
      else {
FUN_0214db7c:
        if (0xd < uVar2) {
          return 0xffffffff;
        }
      }
    }
    else if (bVar1 < 0x24) {
      if ((0x22 < bVar1) || (bVar1 == 0x22)) goto FUN_0214db7c;
    }
    else if (bVar1 == 0x25) {
switchD_0214db44_caseD_15:
      if (0x21 < uVar2) {
        return 0xffffffff;
      }
    }
    if (bVar1 < 0x22) {
      if (bVar1 < 0x21) {
        if (bVar1 < 0x16) {
          switch(bVar1) {
          case 0x10:
            goto switchD_0214dbbc_caseD_10;
          case 0x11:
            goto switchD_0214dbbc_caseD_11;
          case 0x12:
            goto switchD_0214dbbc_caseD_12;
          case 0x13:
            goto switchD_0214dbbc_caseD_13;
          default:
            goto switchD_0214dbbc_caseD_14;
          case 0x15:
            goto switchD_0214dbbc_caseD_15;
          }
        }
        if (bVar1 != 0x20) {
switchD_0214dbbc_caseD_14:
          return 0xffffffff;
        }
switchD_0214dbbc_caseD_10:
        FUN_0214cf10(param_2 + 0x30,pbVar4 + 6,uVar2);
        *(uint *)(param_2 + 4) = uVar2;
      }
      else {
switchD_0214dbbc_caseD_11:
        FUN_0214cf10(param_2 + 0x70,pbVar4 + 6,uVar2);
        *(uint *)(param_2 + 4) = uVar2;
      }
    }
    else if (bVar1 < 0x24) {
      if (bVar1 < 0x23) {
        if (bVar1 != 0x22) {
          return 0xffffffff;
        }
switchD_0214dbbc_caseD_12:
        FUN_0214cf10(param_2 + 0xb0,pbVar4 + 6,uVar2);
        *(uint *)(param_2 + 4) = uVar2;
      }
      else {
switchD_0214dbbc_caseD_13:
        FUN_0214cf10(param_2 + 0xf0,pbVar4 + 6,uVar2);
        *(uint *)(param_2 + 4) = uVar2;
      }
    }
    else {
      if (bVar1 != 0x25) {
        return 0xffffffff;
      }
switchD_0214dbbc_caseD_15:
      if ((uVar2 != 0) && (pbVar4[uVar2 + 5] != 0)) {
        return 0xffffffff;
      }
      FUN_0214cf10(param_2 + 8,pbVar4 + 6,uVar2);
    }
    if (*(short *)(pbVar4 + 4) == 0) {
      return 0;
    }
    iVar3 = FUN_0214cdc4();
    pbVar4 = (byte *)(param_1 + 6 + iVar3);
  } while( true );
}

