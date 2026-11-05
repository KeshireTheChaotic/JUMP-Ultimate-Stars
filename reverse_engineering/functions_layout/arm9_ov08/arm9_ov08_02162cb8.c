
void FUN_02162cb8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  int local_18;
  
  if (*(char *)(DAT_0216e800 + 0x1b85) == '\0') {
    DC_InvalidateRange(DAT_0216e800 + 0xf00,0x400);
    iVar2 = DAT_0216e800;
    local_24 = 0;
    uVar1 = *(ushort *)(param_1 + 0xe);
    if (uVar1 != 0) {
      local_18 = 0;
      local_28 = param_1;
      do {
        iVar6 = *(int *)(local_28 + 0x10);
        iVar3 = FUN_020024cc(iVar6 + 0xc,s_NWCUSBAP_0216adc8,8);
        if ((iVar3 == 0) && ((*(byte *)(iVar6 + 0x15) & 1) != 0)) {
          iVar5 = iVar2 + 0x1300;
          iVar3 = local_18;
          do {
            iVar4 = FUN_020024cc(iVar6 + 4,iVar5,6);
            if (iVar4 == 0) {
              if (*(char *)(iVar2 + iVar3 * 7 + 0x1306) == '\0') {
                if (*(code **)(iVar2 + 0x1370) == (code *)0x0) {
                  *(undefined1 *)(iVar2 + 0x1b85) = 1;
                  return;
                }
                (**(code **)(iVar2 + 0x1370))(1);
                return;
              }
              break;
            }
            iVar5 = iVar5 + 7;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x10);
        }
        local_28 = local_28 + 4;
        local_24 = local_24 + 1;
      } while (local_24 < (int)(uint)uVar1);
    }
  }
  else if (*(code **)(DAT_0216e800 + 0x1370) != (code *)0x0) {
    (**(code **)(DAT_0216e800 + 0x1370))();
    return;
  }
  return;
}

