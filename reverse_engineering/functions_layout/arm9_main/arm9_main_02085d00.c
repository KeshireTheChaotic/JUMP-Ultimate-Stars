
undefined4 FUN_02085d00(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
                    /* JUS-TAG source_file_inferred="BattleMapObj.cpp" */
  iVar4 = 0;
  do {
    if ((int)(uint)*(byte *)(param_1 + 0x10) <= iVar4) {
      return 0;
    }
    piVar3 = (int *)(*(short *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + iVar4 * 4) + 0x30) + 0x1a)
                     * 0x18 + *(int *)(param_2 + 0x18));
    if (((*(byte *)((int)piVar3 + 0x15) & 4) != 0) && (param_4 < piVar3[1])) {
      iVar2 = *piVar3;
      bVar5 = SBORROW4(iVar2,param_3);
      iVar1 = iVar2 - param_3;
      if (iVar2 <= param_3) {
        iVar2 = iVar2 + piVar3[2];
        bVar5 = SBORROW4(param_3,iVar2);
        iVar1 = param_3 - iVar2;
      }
      if (iVar2 == param_3 || iVar1 < 0 != bVar5) {
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

