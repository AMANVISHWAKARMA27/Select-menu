let student = {
    name: "Aman",
    class:"1st Year",
    section:"IT",

    studentDetails: function () {
        return this.name + " " + this.class + " " +
        this.section + " ";
    }
};

console.log("STUDENT " + student.studentDetails());