
void FUN_0207a878(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
                    /* JUS-TAG source_file_inferred="BattleProp.cpp" */
  piVar3 = param_1 + 0x1c;
  iVar5 = 7;
  piVar4 = param_1;
  do {
    if (*piVar4 != 0) {
      piVar1 = *(int **)(*piVar4 + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    }
    iVar5 = iVar5 + -1;
    *(byte *)((int)piVar4 + 0xf) = *(byte *)((int)piVar4 + 0xf) & 0xbf;
    *(byte *)((int)piVar4 + 0xe) = *(byte *)((int)piVar4 + 0xe) & 0x7f;
    *(byte *)((int)piVar4 + 0xf) = *(byte *)((int)piVar4 + 0xf) & 0xc0 | 0x3f;
    piVar4 = piVar4 + 4;
  } while (0 < iVar5);
  iVar5 = 8;
  do {
    if (*piVar3 != 0) {
      iVar2 = FUN_0207b274(*piVar3,0);
      if (iVar2 == 0) {
        *(ushort *)((int)piVar3 + 6) = *(ushort *)((int)piVar3 + 6) & 0x8000;
        *(ushort *)((int)piVar3 + 6) = *(ushort *)((int)piVar3 + 6) | 0x8000;
      }
      else {
        FUN_0207b1c0(param_1[0x34],*piVar3);
        FUN_020517fc(piVar3,0,0xc);
        *(undefined2 *)(piVar3 + 1) = 0xffff;
      }
    }
    iVar5 = iVar5 + -1;
    piVar3 = piVar3 + 3;
  } while (0 < iVar5);
  return;
}

