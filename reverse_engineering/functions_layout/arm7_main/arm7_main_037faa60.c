
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037faa60(void)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808032","048080a0"] */
  iVar2 = _DAT_0380fff4;
  iVar6 = _DAT_0380fff4 + 0x42c;
  iVar5 = 2;
  do {
    psVar3 = (short *)(iVar5 * 0x14 + iVar6);
    if (((*(ushort *)(&DAT_048080a0 + iVar5 * 4) & 0x8000) == 0) && (*psVar3 != 0)) {
      if (*(int *)(psVar3 + 6) == 0) {
        psVar3[2] = psVar3[2] + 1;
        (**(code **)(psVar3 + 8))(*(undefined4 *)(psVar3 + 4),3);
      }
      else {
        *(undefined2 *)(*(int *)(psVar3 + 6) + 8) = **(undefined2 **)(psVar3 + 4);
        *(undefined2 *)(*(int *)(psVar3 + 6) + 0x14) = *(undefined2 *)(*(int *)(psVar3 + 4) + 0xc);
        iVar4 = *(int *)(psVar3 + 4);
        if ((*(ushort *)(iVar4 + 0xc) & 0x4000) == 0) {
          *(ushort *)(*(int *)(psVar3 + 6) + 0xc) = *(ushort *)(iVar4 + 4) & 0xff;
        }
        else {
          if ((((*(ushort *)(_DAT_0380fff4 + 0x690) & 8) != 0) &&
              (psVar7 = (short *)(iVar4 + (uint)*(ushort *)(iVar4 + 10) + 5 & 0xfffffffe),
              *psVar7 == 0)) && (psVar7[1] == 0)) {
            uVar1 = *(ushort *)(*(int *)(psVar3 + 6) + 4);
            _DAT_04808032 = 0x8000;
            *(short *)(iVar2 + 0x3fe) = *(short *)(iVar2 + 0x3fe) + 1;
            if ((uint)*(ushort *)(iVar2 + 0x3d0) < (*(int *)(iVar2 + 0x3ec) - (uint)uVar1 & 0xffff))
            {
              *(undefined2 *)(*(int *)(psVar3 + 6) + 8) = 2;
              psVar3[2] = psVar3[2] + 1;
              *(short *)(iVar2 + 0x4da) = *(short *)(iVar2 + 0x4da) + 1;
              (**(code **)(psVar3 + 8))(*(undefined4 *)(psVar3 + 6),1);
            }
            else {
              *(undefined2 *)(*(int *)(psVar3 + 6) + 0xc) = 0;
              *(ushort *)(&DAT_048080a0 + iVar5 * 4) =
                   *(ushort *)(&DAT_048080a0 + iVar5 * 4) | 0x8000;
            }
            goto LAB_037fac44;
          }
          *(ushort *)(*(int *)(psVar3 + 6) + 0xc) =
               *(short *)(*(int *)(psVar3 + 6) + 0xc) + (*(ushort *)(iVar4 + 4) & 0xff);
        }
        psVar3[2] = psVar3[2] + 1;
        (**(code **)(psVar3 + 8))(*(undefined4 *)(psVar3 + 6),2);
      }
    }
LAB_037fac44:
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      return;
    }
  } while( true );
}

