
void FUN_0217e9d8(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  int local_24;
  int local_18;
  
  if (DAT_021a7d10 != 0) {
    iVar2 = FUN_021766b4(&local_18);
    local_24 = 0;
    if (0 < iVar2) {
      do {
        uVar6 = (uint)*(byte *)(local_18 + local_24);
        iVar3 = FUN_02176654(uVar6);
        if (((iVar3 != 0) && (iVar3 = FUN_0217e970(uVar6), *(int *)(DAT_021a7d10 + 0x608) != 0)) &&
           (*(int *)(iVar3 + 0x2c) != 0)) {
          lVar7 = OS_GetTick();
          lVar1 = lVar7 - *(longlong *)(iVar3 + 0x24);
          uVar4 = (uint)lVar1;
          uVar4 = FUN_0200d0c4(uVar4 * 0x40,(int)((ulonglong)lVar1 >> 0x20) * 0x40 | uVar4 >> 0x1a,
                               0x82ea,0);
          if (*(uint *)(iVar3 + 0x2c) < uVar4) {
            (**(code **)(DAT_021a7d10 + 0x608))(uVar6);
            *(longlong *)(iVar3 + 0x24) = lVar7;
          }
        }
        uVar4 = FUN_021766fc();
        if ((uVar6 != uVar4) && (iVar3 = FUN_0217e95c(uVar6), iVar3 == 1)) {
          piVar5 = (int *)FUN_0217e970(uVar6);
          uVar4 = (uint)*(ushort *)(DAT_021a7d10 + 0x610);
          if (piVar5[5] - piVar5[3] <= (int)(uint)*(ushort *)(DAT_021a7d10 + 0x610)) {
            uVar4 = piVar5[5] - piVar5[3];
          }
          iVar3 = FUN_0217e6cc(uVar6);
          if ((int)uVar4 <= iVar3) {
            FUN_0217e930(uVar6,*piVar5 + piVar5[3],uVar4,1);
            piVar5[3] = piVar5[3] + uVar4;
            iVar3 = piVar5[5];
            if (piVar5[3] == iVar3) {
              *(undefined1 *)(piVar5 + 7) = 0;
              *piVar5 = 0;
              piVar5[3] = 0;
              piVar5[5] = 0;
              if (*(code **)(DAT_021a7d10 + 0x600) != (code *)0x0) {
                (**(code **)(DAT_021a7d10 + 0x600))(iVar3,uVar6);
              }
            }
          }
        }
        local_24 = local_24 + 1;
      } while (local_24 < iVar2);
    }
  }
  return;
}

