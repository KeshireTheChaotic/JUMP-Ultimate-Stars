
int FUN_0214dc38(int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  int *unaff_r4;
  int iVar2;
  ushort *puVar3;
  int in_r12;
  int in_lr;
  
  do {
    iVar2 = *param_2;
    if (*(char *)(iVar2 + 6) == '\0') {
      *param_1 = iVar2;
      puVar3 = (ushort *)*param_2;
      iVar2 = (int)(uint)*(byte *)((int)puVar3 + 0xb) >> 4;
      if (iVar2 == 3) {
        param_1[1] = (uint)*puVar3 +
                     (uint)*(byte *)(*(int *)(*unaff_r4 + 0x40) +
                                    (uint)*(byte *)((int)puVar3 + 7) * in_lr) * 0x400;
      }
      else {
        param_1[1] = (uint)*puVar3 + iVar2 * 0x400;
      }
    }
    else if (*(char *)(iVar2 + 6) == '\x01') {
      cVar1 = *(char *)(iVar2 + 8);
      *param_1 = iVar2;
      param_1[1] = (uint)*(ushort *)*param_2 +
                   (uint)*(byte *)((uint)*(byte *)(*param_2 + 7) * in_r12 +
                                   *(int *)(*unaff_r4 + 0x48) + (cVar1 + -1) * 8) * 0x400;
    }
    else {
      *param_1 = iVar2;
      param_1[1] = *(ushort *)*param_2 + 0xc00;
    }
    param_1 = param_1 + 2;
    param_4 = param_4 + 1;
    param_3 = param_3 + -1;
    param_2 = param_2 + 2;
  } while (param_3 != 0);
  return param_4;
}

