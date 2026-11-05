
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_038065fc(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
                    /* JUS-TAG hw={"TIMER":2,"IO_other":1,"SYSTEM_SHARED":2}
                       io=["027fff90","027fff94","0400010c","0400010e","0400012e"] */
  if ((param_1 & 0x2000000) != 0) {
    iVar3 = 0;
    do {
      (&DAT_0380ba1c)[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
  }
  (&DAT_0380ba1c)[(param_1 & 0xf0000) >> 0x10] = (short)param_1;
  if ((param_1 & 0x1000000) != 0) {
    uVar1 = DAT_0380ba1c >> 8;
    switch(uVar1) {
    case 0x40:
      iVar3 = FUN_03804588(2,uVar1,1,DAT_0380ba1c & 0xff);
      if (iVar3 == 0) {
        FUN_038046d4(uVar1,4);
      }
      _DAT_027fff94 = 0;
      _DAT_027fff90 = 0;
      break;
    case 0x41:
      if (DAT_0380ba3c == 0) {
        DAT_0380ba40 = DAT_0380ba1c & 0xff;
        uVar2 = CONCAT22(DAT_0380ba1e,DAT_0380ba20);
        if ((uVar2 < 0x2000000) || (0x23fffff < uVar2)) {
          FUN_038046d4(uVar1,2);
        }
        else {
          DAT_0380ba44 = uVar2;
          if (uVar2 + CONCAT22(DAT_0380ba22,DAT_0380ba24) < 0x2400001) {
            DAT_0380ba4c = CONCAT22(DAT_0380ba22,DAT_0380ba24);
            iVar3 = FUN_03806558(CONCAT22(DAT_0380ba26,DAT_0380ba28));
            if (iVar3 == 0) {
              FUN_038046d4(uVar1,2);
            }
            else {
              DAT_0380ba48 = 0;
              DAT_0380ba42 = DAT_0380ba40 & 7;
              iVar3 = FUN_03804588(2,uVar1);
              if (iVar3 == 0) {
                FUN_038046d4(uVar1,4);
              }
              else {
                _DAT_027fff94 = 0;
                _DAT_027fff90 = 0;
                DAT_0380ba3c = 1;
              }
            }
          }
          else {
            FUN_038046d4(uVar1,2);
          }
        }
      }
      else {
        FUN_038046d4(uVar1,3);
      }
      break;
    case 0x42:
      if (DAT_0380ba3c == 2) {
        iVar3 = FUN_03804588(2,uVar1,0);
        if (iVar3 == 0) {
          FUN_038046d4(uVar1,4);
        }
        else {
          DAT_0380ba3c = 3;
          _DAT_0400010e = _DAT_0400010e & 0xff7f;
        }
      }
      else {
        FUN_038046d4(uVar1,3);
      }
      break;
    case 0x43:
      if (DAT_0380ba3c == 2) {
        iVar3 = FUN_03806558(CONCAT22(DAT_0380ba1e,DAT_0380ba20));
        if (iVar3 == 0) {
          FUN_038046d4(uVar1,2);
        }
        else {
          OS_DisableInterrupts();
          _DAT_0400010c = DAT_0380ba50;
          _DAT_0400010e = DAT_0380ba52 | 0xc0;
          OS_RestoreInterrupts();
          FUN_038046d4(uVar1,0);
        }
      }
      else {
        FUN_038046d4(uVar1,3);
      }
      break;
    default:
      FUN_038046d4(uVar1,1);
    }
  }
  return;
}

