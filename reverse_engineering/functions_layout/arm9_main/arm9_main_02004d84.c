
/* WARNING: Removing unreachable block (ram,0x02005630) */
/* WARNING: Removing unreachable block (ram,0x0200563c) */
/* WARNING: Removing unreachable block (ram,0x02005626) */
/* WARNING: Removing unreachable block (ram,0x0200562a) */
/* WARNING: Removing unreachable block (ram,0x02005638) */
/* WARNING: Removing unreachable block (ram,0x0200576e) */
/* WARNING: Removing unreachable block (ram,0x0200578e) */
/* WARNING: Removing unreachable block (ram,0x020056ce) */
/* WARNING: Removing unreachable block (ram,0x02005768) */
/* WARNING: Removing unreachable block (ram,0x02005648) */
/* WARNING: Removing unreachable block (ram,0x02005666) */
/* WARNING: Removing unreachable block (ram,0x020056dc) */
/* WARNING: Removing unreachable block (ram,0x0200565e) */
/* WARNING: Removing unreachable block (ram,0x02005794) */
/* WARNING: Removing unreachable block (ram,0x020057b0) */
/* WARNING: Removing unreachable block (ram,0x020057b4) */
/* WARNING: Removing unreachable block (ram,0x020057a8) */
/* WARNING: Removing unreachable block (ram,0x020057bc) */
/* WARNING: Removing unreachable block (ram,0x020057c0) */
/* WARNING: Removing unreachable block (ram,0x020057ce) */
/* WARNING: Removing unreachable block (ram,0x020057d2) */
/* WARNING: Removing unreachable block (ram,0x020057f0) */
/* WARNING: Removing unreachable block (ram,0x02005808) */
/* WARNING: Removing unreachable block (ram,0x02005818) */
/* WARNING: Removing unreachable block (ram,0x02005826) */
/* WARNING: Removing unreachable block (ram,0x0200585e) */
/* WARNING: Removing unreachable block (ram,0x02005878) */
/* WARNING: Removing unreachable block (ram,0x0200586a) */
/* WARNING: Removing unreachable block (ram,0x02005890) */
/* WARNING: Removing unreachable block (ram,0x02005898) */
/* WARNING: Removing unreachable block (ram,0x0200589c) */
/* WARNING: Removing unreachable block (ram,0x020058ac) */

undefined8
FUN_02004d84(int param_1,code *param_2,undefined4 param_3,undefined4 *param_4,int *param_5)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int extraout_r1;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined8 uVar10;
  int local_cc;
  int local_a0;
  char local_73 [51];
  undefined2 local_40 [2];
  byte bStack_3c;
  char acStack_3b [35];
  undefined4 *puStack_18;
  
                    /* JUS-TAG strings=["INFINITY","NAN("] */
  puVar2 = local_40;
  iVar4 = 0x13;
  puStack_18 = param_4;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_cc = 0;
  *param_5 = 0;
  iVar4 = (*param_2)(param_3,0,0);
  pcVar5 = s_INFINITY_0208d64d;
  pcVar6 = local_73;
  local_a0 = 9;
  do {
    cVar9 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar6 = cVar9;
    pcVar6 = pcVar6 + 1;
    local_a0 = local_a0 + -1;
  } while (local_a0 != 0);
  if ((0 < param_1) && (iVar4 != -1)) {
    FUN_02004e06();
    iVar4 = extraout_r1;
  }
  *param_4 = 0;
  (*param_2)(param_3,iVar4,1);
  pcVar5 = acStack_3b + bStack_3c;
  uVar3 = (uint)bStack_3c;
  while ((uVar3 != 0 && (pcVar5 = pcVar5 + -1, *pcVar5 == '0'))) {
    local_cc = local_cc + 1;
    uVar3 = uVar3 - 1;
  }
  bStack_3c = (byte)uVar3;
  if ((uVar3 & 0xff) == 0) {
    bStack_3c = bStack_3c + '\x01';
    acStack_3b[0] = '0';
  }
  if ((local_cc < -0x8000) || (0x7fff < local_cc)) {
    *param_5 = 1;
  }
  if (*param_5 != 0) {
    return CONCAT44(DAT_02093140,DAT_0209313c);
  }
  local_40[1] = (undefined2)local_cc;
  uVar10 = FUN_0200a604();
  iVar4 = (int)((ulonglong)uVar10 >> 0x20);
  uVar1 = (undefined4)uVar10;
  cVar9 = iVar4 == 0;
  FUN_0200c3f0(0,0,uVar1);
  if (cVar9 == '\0') {
    cVar9 = '\0';
    FUN_0200c330(uVar1,iVar4,0,0x100000);
    if (cVar9 == '\0') {
      *param_5 = 1;
      return uVar10;
    }
  }
  bVar8 = false;
  bVar7 = false;
  FUN_0200c26c(uVar1,iVar4,0xffffffff,0x7fefffff);
  if (bVar8 && !bVar7) {
    *param_5 = 1;
    uVar10 = CONCAT44(DAT_02093140,DAT_0209313c);
  }
  return uVar10;
}

