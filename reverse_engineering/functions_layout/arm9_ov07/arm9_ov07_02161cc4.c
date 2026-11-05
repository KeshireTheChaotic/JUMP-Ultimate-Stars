
void FUN_02161cc4(int *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  char *pcVar5;
  uint uVar6;
  
  puVar4 = (undefined2 *)*param_2;
  pcVar5 = *(char **)(*(int *)(param_1[8] + 0xc) + 0x24);
  uVar1 = *(undefined2 *)(pcVar5 + 2);
  *puVar4 = *(undefined2 *)pcVar5;
  puVar4[1] = uVar1;
  uVar1 = *(undefined2 *)(pcVar5 + 6);
  puVar4[2] = *(undefined2 *)(pcVar5 + 4);
  puVar4[3] = uVar1;
  if (pcVar5[4] == *pcVar5) {
    iVar2 = *param_2;
    puVar4 = (undefined2 *)(iVar2 + 8);
    if (pcVar5[5] == '\x01') {
      *puVar4 = (short)param_1[1];
      *(short *)(iVar2 + 10) = (short)param_1[3];
    }
    else if (pcVar5[5] == '\x02') {
      uVar6 = (uint)*(ushort *)(pcVar5 + 0x168);
      uVar3 = param_1[1] - *(ushort *)(pcVar5 + 6) * uVar6;
      if (uVar6 < uVar3) {
        uVar3 = uVar6;
      }
      FUN_02051890(*param_1 + *(ushort *)(pcVar5 + 6) * uVar6,puVar4,uVar3);
    }
  }
  *(ushort *)(param_2 + 1) = *(short *)(pcVar5 + 0x168) + 9U & 0xfffe;
  return;
}

