
void FUN_03805778(uint param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  
  if ((param_1 & 0x2000000) != 0) {
    iVar3 = 0;
    do {
      (&DAT_0380aa78)[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
  }
  (&DAT_0380aa78)[(param_1 & 0xf0000) >> 0x10] = (short)param_1;
  if ((param_1 & 0x1000000) != 0) {
    uVar1 = DAT_0380aa78 >> 8;
    switch(uVar1) {
    case 0x60:
      FUN_038046d4(0x60,0);
      break;
    case 0x61:
      iVar3 = FUN_03804588(3,uVar1,2,DAT_0380aa78 & 0xff,DAT_0380aa7a);
      if (iVar3 == 0) {
        FUN_038046d4(uVar1,4);
      }
      break;
    case 0x62:
    default:
      FUN_038046d4(uVar1,1);
      break;
    case 99:
      iVar3 = FUN_03804588(3,uVar1,1,CONCAT22(DAT_0380aa78,DAT_0380aa7a) & 0xffffff);
      if (iVar3 == 0) {
        FUN_038046d4(uVar1,4);
      }
      break;
    case 100:
      iVar3 = FUN_03804588(3,uVar1,2,DAT_0380aa78 & 0xff,DAT_0380aa7a);
      if (iVar3 == 0) {
        FUN_038046d4(uVar1,4);
      }
      break;
    case 0x65:
      iVar3 = FUN_03804588(3,uVar1,1,DAT_0380aa78);
      if (iVar3 == 0) {
        FUN_038046d4(uVar1,4);
      }
      break;
    case 0x66:
      FUN_03805edc(DAT_0380aa78 & 0xff);
      FUN_038046d4(0x66,0);
      break;
    case 0x67:
      uVar2 = FUN_03805ecc();
      FUN_038046d4(0x67,uVar2);
    }
  }
  return;
}

