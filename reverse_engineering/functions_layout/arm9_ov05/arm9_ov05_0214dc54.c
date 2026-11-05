
int FUN_0214dc54(int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int *unaff_r4;
  uint unaff_r5;
  int iVar3;
  uint uVar4;
  ushort *unaff_r8;
  int in_r12;
  int in_lr;
  
  do {
    uVar4 = (int)unaff_r5 >> 4 & 0xf;
    piVar2 = param_1;
    if (uVar4 == 3) {
      param_1[1] = (uint)*unaff_r8 +
                   (uint)*(byte *)(*(int *)(*unaff_r4 + 0x40) +
                                  (uint)*(byte *)((int)unaff_r8 + 7) * in_lr) * 0x400;
    }
    else {
      param_1[1] = (uint)*unaff_r8 + uVar4 * 0x400;
    }
    while( true ) {
      param_1 = piVar2 + 2;
      param_4 = param_4 + 1;
      param_3 = param_3 + -1;
      param_2 = param_2 + 2;
      if (param_3 == 0) {
        return param_4;
      }
      iVar3 = *param_2;
      if (*(char *)(iVar3 + 6) == '\0') break;
      if (*(char *)(iVar3 + 6) == '\x01') {
        cVar1 = *(char *)(iVar3 + 8);
        *param_1 = iVar3;
        piVar2[3] = (uint)*(ushort *)*param_2 +
                    (uint)*(byte *)((uint)*(byte *)(*param_2 + 7) * in_r12 +
                                    *(int *)(*unaff_r4 + 0x48) + (cVar1 + -1) * 8) * 0x400;
        piVar2 = param_1;
      }
      else {
        *param_1 = iVar3;
        piVar2[3] = *(ushort *)*param_2 + 0xc00;
        piVar2 = param_1;
      }
    }
    *param_1 = iVar3;
    unaff_r8 = (ushort *)*param_2;
    unaff_r5 = (uint)*(byte *)((int)unaff_r8 + 0xb);
  } while( true );
}

