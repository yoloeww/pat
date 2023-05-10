bool cmp(stu a,stu b) {
    if (a.grade != b.grade) return a.grade > b.grade;
    else return a.id < b.id;
}
