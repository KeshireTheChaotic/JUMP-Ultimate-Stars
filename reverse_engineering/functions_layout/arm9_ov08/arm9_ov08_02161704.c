
void FUN_02161704(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a0;
  byte local_9c [4];
  byte local_98 [4];
  undefined4 local_94 [32];
  
  iVar1 = DAT_0216e7ec + 0x1300;
  DC_InvalidateRange(DAT_0216e7ec + 0xf00,0x400);
  local_b8 = 0;
  if (*(short *)(param_1 + 0xe) != 0) {
    local_ac = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_b4 = param_1;
    local_b0 = param_1;
    do {
      iVar6 = *(int *)(local_b4 + 0x10);
      if ((*(char *)(iVar6 + 0xc) != '\0') && (*(short *)(iVar6 + 0x3c) == 0)) {
        iVar3 = local_ac;
        iVar5 = iVar1;
        do {
          iVar2 = FUN_020024cc(iVar6 + 4,iVar5 + 0x20,6);
          if (iVar2 == 0) break;
          iVar5 = iVar5 + 0x2a;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x14);
        if (iVar3 == 0x14) {
          iVar3 = local_a8;
          iVar5 = iVar1;
          do {
            iVar2 = FUN_020024cc(iVar5 + 0x20,&DAT_0216ad3c,6);
            if (iVar2 == 0) break;
            iVar5 = iVar5 + 0x2a;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x14);
          if (iVar3 == 0x14) {
            return;
          }
        }
        iVar3 = iVar1 + iVar3 * 0x2a;
        FUN_02051890(iVar6 + 4,iVar3 + 0x20,6);
        FUN_02051890(iVar6 + 0xc,iVar3,0x20);
        *(undefined2 *)(iVar3 + 0x26) = *(undefined2 *)(local_b0 + 0x50);
        if ((*(ushort *)(iVar6 + 0x2c) & 0x10) == 0) {
          *(undefined1 *)(iVar3 + 0x28) = 0;
        }
        else {
          *(undefined1 *)(iVar3 + 0x28) = 1;
          FUN_02058540(local_9c,iVar6);
          uVar7 = (uint)local_9c[0];
          if (uVar7 != 0) {
            pbVar4 = local_9c;
            iVar6 = local_a0;
            do {
              if (pbVar4[4] == 0x30) {
                *(undefined1 *)(iVar3 + 0x28) = 2;
                break;
              }
              if (((pbVar4[4] == 0xdd) && (3 < pbVar4[5])) &&
                 (iVar5 = FUN_020024cc(*(undefined4 *)(pbVar4 + 8),&DAT_0216ad38,4), iVar5 == 0)) {
                *(undefined1 *)(iVar3 + 0x28) = 2;
                break;
              }
              pbVar4 = pbVar4 + 8;
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar7);
          }
        }
      }
      local_b4 = local_b4 + 4;
      local_b0 = local_b0 + 2;
      local_b8 = local_b8 + 1;
    } while (local_b8 < (int)(uint)*(ushort *)(param_1 + 0xe));
  }
  return;
}

