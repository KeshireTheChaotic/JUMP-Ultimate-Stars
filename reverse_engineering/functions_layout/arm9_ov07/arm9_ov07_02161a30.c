
undefined4 FUN_02161a30(int param_1,int *param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar5 = (char *)*param_2;
  pcVar7 = *(char **)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  uVar6 = 0;
  if (*(ushort *)(pcVar7 + 0x16a) <= *(ushort *)(param_2 + 1)) {
    if (*pcVar5 == *pcVar7) {
      uVar2 = *(undefined2 *)(pcVar5 + 2);
      *(undefined2 *)(pcVar7 + 4) = *(undefined2 *)pcVar5;
      *(undefined2 *)(pcVar7 + 6) = uVar2;
    }
    if (pcVar5[4] == *pcVar7) {
      cVar1 = pcVar5[5];
      iVar4 = *param_2;
      if (cVar1 == '\x01') {
        *(uint *)(param_1 + 0x14) = (uint)*(ushort *)(iVar4 + 8);
        *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(iVar4 + 10);
        uVar3 = FUN_0200d338(*(int *)(param_1 + 0x14) + (uint)*(ushort *)(pcVar7 + 0x16a) + -1);
        *(uint *)(pcVar7 + 8) = uVar3 & 0xffff;
        *(undefined4 *)(pcVar7 + 0xc) = *(undefined4 *)(pcVar7 + 8);
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        if (*(int *)(pcVar7 + 8) == 0) {
          pcVar7[1] = '\x04';
        }
        else {
          pcVar7[1] = '\x02';
        }
      }
      else if (cVar1 == '\x02') {
        FUN_02161b5c(param_1,*(undefined2 *)(pcVar5 + 6));
      }
      else if (cVar1 == '\x05') {
        pcVar7[0x170] = '\0';
        pcVar7[0x171] = '\0';
        pcVar7[0x172] = '\0';
        pcVar7[0x173] = '\0';
      }
    }
    if (((pcVar5[4] == *pcVar7) && (pcVar5[5] == '\x04')) && (pcVar7[5] == '\x04')) {
      *pcVar7 = *pcVar7 + '\x01';
      pcVar7[1] = '\x05';
      uVar6 = 1;
    }
  }
  return uVar6;
}

