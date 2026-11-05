
void FUN_0216baf4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int extraout_r1_02;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int local_78 [5];
  int local_64 [15];
  undefined4 uStack_28;
  
  pcVar5 = &DAT_0216d7c0;
  uStack_28 = param_4;
  uVar2 = FUN_020726a0();
  uVar2 = FUN_0200d338(uVar2,0x34bc0);
  FUN_0200d338(uVar2,100);
  local_64[0] = extraout_r1;
  uVar2 = FUN_020726a0();
  uVar2 = FUN_0200d338(uVar2,0xe10);
  FUN_0200d338(uVar2,0x3c);
  local_64[1] = extraout_r1_00;
  uVar2 = FUN_020726a0();
  uVar2 = FUN_0200d338(uVar2,0x3c);
  FUN_0200d338(uVar2,0x3c);
  local_64[2] = extraout_r1_01;
  local_64[3] = FUN_02070f94();
  local_64[4] = FUN_0207281c(0);
  local_64[5] = FUN_0207281c(1);
  local_64[6] = FUN_0207281c(2);
  local_64[7] = FUN_0207281c(3);
  local_64[8] = FUN_0207281c(4);
  local_64[9] = FUN_0207281c(5);
  local_64[10] = FUN_020727ac();
  local_64[0xb] = FUN_020726bc();
  local_64[0xc] = FUN_02072734();
  iVar6 = 0;
  local_64[0xd] = (uint)DAT_020b0b98;
  local_64[0xe] = (uint)DAT_020b0b9a;
  do {
    if ((param_2 != 0) || (pcVar5[5] == '\0')) {
      iVar8 = (int)*pcVar5;
      iVar3 = 0x14;
      piVar7 = (int *)(iVar6 * 0x14 + param_1 + 0x74);
      cVar9 = pcVar5[4];
      bVar1 = pcVar5[3];
      iVar4 = local_64[iVar6];
      iVar10 = iVar8;
      while (iVar10 = iVar10 + -1, -1 < iVar10) {
        FUN_0200d12c(iVar4,10);
        local_78[iVar10] = extraout_r1_02;
        iVar3 = FUN_0200d12c(iVar4,10);
        iVar4 = iVar3;
      }
      for (iVar10 = 0; iVar10 < iVar8; iVar10 = iVar10 + 1) {
        if (cVar9 == '\0') {
          iVar3 = local_78[iVar10];
        }
        if ((cVar9 != '\0' || iVar3 != 0) || (iVar10 == iVar8 + -1)) {
          cVar9 = '\x01';
          (**(code **)(**(int **)(*piVar7 + 4) + 0xd8))(*(int **)(*piVar7 + 4),1);
          iVar3 = FUN_02023894(*(undefined4 *)(*piVar7 + 4),
                               (uint)bVar1 + local_78[iVar10] + 0x800000,0);
        }
        else {
          iVar3 = (**(code **)(**(int **)(*piVar7 + 4) + 0xd8))(*(int **)(*piVar7 + 4),0);
        }
        piVar7 = piVar7 + 1;
      }
    }
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 6;
  } while (iVar6 < 0xf);
  return;
}

