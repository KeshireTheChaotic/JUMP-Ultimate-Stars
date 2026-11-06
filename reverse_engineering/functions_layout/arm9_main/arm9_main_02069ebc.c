
undefined4 FUN_02069ebc(int param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 local_c0;
  undefined4 local_bc;
  
  lVar8 = CONCAT44(local_c0,local_bc);
  uVar2 = param_2 >> 0x10 & 0xff;
  uVar5 = param_2 & 0xffff | 0x10000;
  bVar1 = false;
  bVar6 = false;
  do {
    do {
      while (!bVar6) {
        DAT_020afbfc = 0;
        switch(param_1) {
        case 1:
          iVar3 = FUN_020557c8(4,uVar2 | 0x2002300,0);
          if (iVar3 < 0) {
            bVar6 = false;
          }
          else {
            iVar3 = FUN_020557c8(4,uVar5,0);
            if (iVar3 < 0) {
              bVar6 = false;
            }
            else {
              iVar3 = FUN_020557c8(4,0x20000,0);
              if (iVar3 < 0) {
                bVar6 = false;
              }
              else {
                iVar3 = FUN_020557c8(4,param_3 & 0xffff | 0x30000,0);
                if (iVar3 < 0) {
                  bVar6 = false;
                }
                else {
                  iVar3 = FUN_020557c8(4,param_4 >> 0x10 | 0x40000,0);
                  if (iVar3 < 0) {
                    bVar6 = false;
                  }
                  else {
                    iVar3 = FUN_020557c8(4,param_4 & 0xffff | 0x1050000,0);
                    if (iVar3 < 0) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                  }
                }
              }
            }
          }
          break;
        case 2:
          iVar3 = FUN_020557c8(4,0x3002000,0);
          if (iVar3 < 0) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          break;
        case 3:
          iVar3 = FUN_020557c8(4,uVar2 | 0x2002500,0);
          bVar6 = false;
          if ((((-1 < iVar3) && (iVar3 = FUN_020557c8(4,uVar5,0), bVar6 = false, -1 < iVar3)) &&
              (iVar3 = FUN_020557c8(4,param_3 | 0x20000,0), bVar6 = false, -1 < iVar3)) &&
             ((iVar3 = FUN_020557c8(4,param_4 >> 0x10 | 0x30000,0), bVar6 = false, -1 < iVar3 &&
              (iVar3 = FUN_020557c8(4,param_4 & 0xffff | 0x1040000,0), bVar6 = false, -1 < iVar3))))
          {
            bVar6 = true;
          }
          lVar8 = OS_GetTick();
          break;
        case 4:
        case 5:
          iVar3 = FUN_020557c8(4,0x2002202,0);
          if (iVar3 < 0) {
            bVar6 = false;
          }
          else {
            iVar3 = FUN_020557c8(4,0x10afc,0);
            if (iVar3 < 0) {
              bVar6 = false;
            }
            else {
              iVar3 = FUN_020557c8(4,0x1022000,0);
              if (iVar3 < 0) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
            }
          }
          break;
        case 6:
          iVar3 = FUN_020557c8(4,0x3002d00,0);
          if (iVar3 < 0) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          break;
        case 7:
          iVar3 = FUN_020557c8(4,0x3002100,0);
          if (iVar3 < 0) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
        }
      }
    } while (DAT_020afbfc != 1);
    if (DAT_020afbf8 != 0) {
      return 0;
    }
    bVar6 = bVar1;
    switch(param_1) {
    case 1:
      return 1;
    case 2:
      param_1 = 4;
      break;
    case 3:
      param_1 = 5;
      break;
    case 4:
    case 5:
      DC_InvalidateRange(&DAT_020afc20,1);
      if (param_1 != 4) {
        if ((DAT_020afc20 & 1) == 0) {
          return 1;
        }
        if ((DAT_020afc20 & 0x20) == 0) {
          lVar9 = OS_GetTick();
          uVar4 = (uint)(lVar9 - lVar8);
          uVar10 = FUN_0200d0c4(uVar4 * 0x40,
                                (int)((ulonglong)(lVar9 - lVar8) >> 0x20) * 0x40 | uVar4 >> 0x1a,
                                0x82ea,0);
          iVar3 = (int)((ulonglong)uVar10 >> 0x20);
          bVar7 = (uint)uVar10 < 0xfa1;
          if ((uint)-iVar3 < (uint)bVar7) {
            SVC_WaitByLoop(0x4000,-(uint)!bVar7 - iVar3);
            break;
          }
        }
        param_1 = 6;
        break;
      }
      if ((DAT_020afc20 & 2) == 0) {
        return 0;
      }
      param_1 = 3;
      break;
    case 6:
      return 0;
    case 7:
      return 1;
    }
  } while( true );
}

