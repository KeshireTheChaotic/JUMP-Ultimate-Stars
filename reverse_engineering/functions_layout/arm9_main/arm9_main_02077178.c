
short FUN_02077178(int param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short local_30 [6];
  
  if (*(char *)(param_2 + 0x40) == '\0') {
    sVar1 = 0;
    param_3[2] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    iVar7 = *(int *)(param_2 + 0x38);
    iVar2 = (uint)*(byte *)(param_2 + 0x41) * 0x3c + *(int *)(DAT_0214bd80 + 0x40);
    iVar5 = 0;
    local_30[0] = *(short *)(iVar2 + 8);
    local_30[1] = *(undefined2 *)(iVar2 + 10);
    local_30[2] = *(undefined2 *)(iVar2 + 0xc);
    do {
      iVar2 = 0;
      do {
        if (*(char *)(iVar7 + iVar5 * 5 + iVar2) != '\0') {
          iVar4 = 0;
          do {
            iVar3 = iVar2 + (*(byte *)(param_2 + 0xe) & 0xf) + (int)(char)(&DAT_02092e34)[iVar4 * 2]
            ;
            iVar6 = iVar5 + ((int)(*(byte *)(param_2 + 0xe) & 0xf0) >> 4) +
                    (int)(char)(&DAT_02092e35)[iVar4 * 2];
            if ((((-1 < iVar3) && (iVar3 < 5)) && (-1 < iVar6)) &&
               ((iVar6 < 4 &&
                (iVar3 = *(int *)(iVar6 * 0x14 + param_1 + iVar3 * 4 + 8),
                iVar3 != 0 && iVar3 != param_2)))) {
              iVar6 = 0;
              do {
                if ((param_3[iVar6] == 0) &&
                   (*(short *)(*(int *)(iVar3 + 0x34) + 2) == local_30[iVar6])) {
                  sVar1 = sVar1 + 1;
                  param_3[iVar6] = iVar3;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < 3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 4);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  else {
    sVar1 = 0;
  }
  return sVar1;
}

