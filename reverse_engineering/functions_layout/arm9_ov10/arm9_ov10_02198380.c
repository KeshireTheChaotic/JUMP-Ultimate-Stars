
void FUN_02198380(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = 0x14;
  switch(*(undefined2 *)(param_1 + 2)) {
  case 0:
    if (*(int *)(DAT_021aa094 + 0x2260) == 5) {
      FUN_021988cc(6);
      FUN_02198974(0,0,0,0x704);
    }
    iVar3 = *(int *)(DAT_021aa094 + 0x2260);
    if (iVar3 == 6) {
      *(undefined2 *)(DAT_021aa094 + 0x2280) = 7;
      if (*(short *)(param_1 + 8) == 5) {
        DC_InvalidateRange(*(undefined4 *)(DAT_021aa094 + 0x2288),
                           *(undefined2 *)(DAT_021aa094 + 0x228c));
        iVar4 = 0;
        if (*(short *)(param_1 + 0xe) != 0) {
          iVar3 = param_1;
          iVar6 = param_1;
          do {
            FUN_021997ec(*(undefined4 *)(iVar3 + 0x10),*(undefined2 *)(iVar6 + 0x50));
            FUN_0219893c(7,0,*(undefined4 *)(iVar3 + 0x10),param_1,0x71a);
            iVar6 = iVar6 + 2;
            iVar3 = iVar3 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0xe));
        }
      }
      if (((*(uint *)(DAT_021aa094 + 0x2264) & 0xc00000) == 0xc00000) &&
         (iVar4 = FUN_02197c54(*(uint *)(DAT_021aa094 + 0x2264) & 0x3ffe), iVar4 != 0)) {
        uVar5 = *(undefined4 *)(DAT_021aa094 + 0x2284);
        FUN_0200d338(uVar5);
        if (extraout_r1 == 0) {
          FUN_0219893c(8,0,uVar5,0,0x728);
        }
      }
      sVar1 = FUN_02197c78(*(undefined2 *)(param_1 + 10));
      uVar2 = FUN_021989ac(0x20 - sVar1);
      *(short *)(DAT_021aa094 + 0x228e) = (short)((1 << (uVar2 & 0xff)) >> 1);
      DC_InvalidateRange(*(undefined4 *)(DAT_021aa094 + 0x2288),
                         *(undefined2 *)(DAT_021aa094 + 0x228c));
      *(int *)(DAT_021aa094 + 0x2284) = *(int *)(DAT_021aa094 + 0x2284) + 1;
      iVar4 = FUN_02058f88(0x2198381,DAT_021aa094 + 0x2288);
    }
    else if (iVar3 == 7) {
      iVar4 = FUN_02058f40(0x219831d);
    }
    else if (iVar3 == 0xd) {
      FUN_0219881c();
      return;
    }
    if (iVar4 != 2) {
      if ((iVar4 == 3) || (iVar4 != 8)) {
        FUN_021988cc(0xb);
        FUN_02198974(7,0,0,0x75c);
        return;
      }
      FUN_021988cc(0xc);
      FUN_02198974(1,0,0,0x753);
      return;
    }
    break;
  case 1:
    FUN_0219881c();
    return;
  default:
    FUN_021988cc(0xb);
    FUN_02198974(7,0,0,0x76d);
  }
  return;
}

