
void FUN_03804d7c(uint param_1)

{
  ushort uVar1;
  int iVar2;
  
  if ((param_1 & 0x2000000) != 0) {
    iVar2 = 0;
    do {
      (&DAT_0380a994)[iVar2] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
  }
  (&DAT_0380a994)[(param_1 & 0xf0000) >> 0x10] = (short)param_1;
  if ((param_1 & 0x1000000) != 0) {
    uVar1 = DAT_0380a994 >> 8;
    switch(uVar1) {
    case 0:
      iVar2 = FUN_03804588(0,uVar1,0);
      if (iVar2 == 0) {
        FUN_038046d4(uVar1,4);
      }
      break;
    case 1:
      if (DAT_0380a9b4 == 0) {
        if (((DAT_0380a994 & 0xff) == 0) || (4 < (DAT_0380a994 & 0xff))) {
          FUN_038046d4(uVar1,2);
        }
        else if (DAT_0380a996 < 0x107) {
          iVar2 = FUN_03804588(0,uVar1,2,DAT_0380a994 & 0xff,DAT_0380a996);
          if (iVar2 == 0) {
            FUN_038046d4(uVar1,4);
          }
          else {
            DAT_0380a9b4 = 1;
          }
        }
        else {
          FUN_038046d4(uVar1,2);
        }
      }
      else {
        FUN_038046d4(uVar1,3);
      }
      break;
    case 2:
      if (DAT_0380a9b4 == 2) {
        iVar2 = FUN_03804588(0,uVar1,0);
        if (iVar2 == 0) {
          FUN_038046d4(uVar1,4);
        }
        else {
          DAT_0380a9b4 = 3;
        }
      }
      else {
        FUN_038046d4(uVar1,3);
      }
      break;
    case 3:
      FUN_03804994(DAT_0380a994 & 0xff);
      break;
    default:
      FUN_038046d4(uVar1,1);
    }
  }
  return;
}

